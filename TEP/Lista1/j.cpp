#include <bits/stdc++.h>
using namespace std;
int main(){
    size_t n_jack,m_jill;
    
    while(1){
        int resultado = 0;
        cin >> n_jack >> m_jill;
        vector<int> jack_cds,jill_cds;
        if(n_jack == 0 && m_jill == 0){
            break;
        } else{
            for(size_t i = 0;i < (n_jack+m_jill);i++){
                int cd_number;
                cin >> cd_number;
                if(i < n_jack){
                    jack_cds.push_back(cd_number);
                } else{
                    jill_cds.push_back(cd_number);
                }
            }
        }
        sort(jack_cds.begin(),jack_cds.end());
        sort(jill_cds.begin(),jill_cds.end());
        for(size_t i = 0; i < n_jack;i++){
            if(binary_search(jill_cds.begin(),jill_cds.end(),jack_cds[i])){
                resultado++;
            } else{continue;}
        }
        cout << resultado << endl;
    }
    return 0;
    }   
    //esta dando returns errados.
    // nao eh possivel aferir os erros visto que nao tenho os testes utilizados
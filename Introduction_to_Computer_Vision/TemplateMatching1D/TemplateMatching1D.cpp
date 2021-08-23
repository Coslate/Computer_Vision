#include <TemplateMatching1D.h>

void displayArray(const std::string &in_s, const std::vector<int> &in_v){
    std::cout<<in_s<<" : "<<std::endl;
    for(size_t i = 0;i<in_v.size();++i){
        printf("%2ld ", i+1);//match with result of Octave/Matlab
    }
    printf("\n");

    for(size_t i = 0;i<in_v.size();++i){
        printf("%2d ", in_v[i]);
    }
    printf("\n");
}

void displayArray(const std::string &in_s, const std::vector<double> &in_v, const int &offset){
    std::cout<<in_s<<" : "<<std::endl;
    for(size_t i = 0;i<in_v.size();++i){
        if(in_v[i]<0){
            printf("       %2ld ", i+1-offset);//match with result of Octave/Matlab
        }else{
            printf("      %2ld ", i+1-offset);//match with result of Octave/Matlab
        }
    }
    printf("\n");

    for(size_t i = 0;i<in_v.size();++i){
        printf("%.6lf ", in_v[i]);
    }
    printf("\n");
}

void templateMatching1D(const std::vector<int> &s, const std::vector<int> &t, size_t &index){
    size_t len_s = s.size();
    size_t len_t = t.size();

    size_t max_index = 0;
    double max_score = -1;
    std::vector<double> corr_result;

    //Calculate Normalized Cross Correlation
    for(size_t i=0;i<(len_s+len_t-1);++i){
        double nominator   = 0;
        double denominator = 0;
        double s_square    = 0;
        double t_square    = 0;
        double score_corr_norm = 0;

        for(size_t t_i=0;t_i<len_t;++t_i){
            double value_s = ((t_i+i-len_t+1 >= 0) && ((i+t_i-len_t+1) < len_s)) ? s[i+t_i-(len_t-1)] : 0;
            nominator += double(t[t_i]*value_s);
            s_square  += double(value_s*value_s);
            t_square  += double(t[t_i]*t[t_i]);
        }
        denominator     = sqrt(t_square*s_square);
        score_corr_norm = nominator/denominator;
        corr_result.push_back(score_corr_norm);

        if(score_corr_norm > max_score){
            max_score = score_corr_norm;
            max_index = i;
        }
    }

    displayArray("Normalized Cross Correlation", corr_result, (len_t-1));
    index = max_index-(len_t-1);
}





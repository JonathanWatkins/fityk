// Header of class UdfDataSet
// Licence: Lesser GNU Public License 2.1 (LGPL) 
// $Id: ds_philips_udf.h $

#ifndef UDF_DATASET
#define UDF_DATASET
#include "xylib.h"


namespace xylib {
    class UdfDataSet : public DataSet
    {
    public:
        UdfDataSet(std::istream &is, const std::string &filename = "")
            : DataSet(is, FT_UDF, filename) {}

        // implement the interfaces specified by DataSet
        void load_data();

        static bool check(std::istream &f);

        const static FormatInfo fmt_info;

    protected:
        void get_key_val(std::istream &f, std::string &key, std::string &val);
    }; 
}
#endif // #ifndef UDF_DATASET

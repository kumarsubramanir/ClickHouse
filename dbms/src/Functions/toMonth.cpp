#include <Functions/IFunction.h>
#include <Functions/FunctionFactory.h>
#include <Functions/DateTimeTransforms.h>
#include <Functions/FunctionDateOrDateTimeToSomething.h>
#include <DataTypes/DataTypesNumber.h>


namespace DB
{

using FunctionToMonth = FunctionDateOrDateTimeToSomething<DataTypeUInt8, ToMonthImpl>;

void registerFunctionToMonth(FunctionFactory & factory)
{
    factory.registerFunction<FunctionToMonth>();
}

}



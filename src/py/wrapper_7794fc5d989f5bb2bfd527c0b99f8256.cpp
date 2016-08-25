#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

void wrapper_7794fc5d989f5bb2bfd527c0b99f8256()
{

    std::string name_21ee8db290f35815a57c7bf74dca851d = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".boost");
    boost::python::object module_21ee8db290f35815a57c7bf74dca851d(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_21ee8db290f35815a57c7bf74dca851d.c_str()))));
    boost::python::scope().attr("boost") = module_21ee8db290f35815a57c7bf74dca851d;
    boost::python::scope scope_21ee8db290f35815a57c7bf74dca851d = module_21ee8db290f35815a57c7bf74dca851d;
    std::string name_fc29b231afcc5a6587b428f2bab37266 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".python");
    boost::python::object module_fc29b231afcc5a6587b428f2bab37266(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fc29b231afcc5a6587b428f2bab37266.c_str()))));
    boost::python::scope().attr("python") = module_fc29b231afcc5a6587b428f2bab37266;
    boost::python::scope scope_fc29b231afcc5a6587b428f2bab37266 = module_fc29b231afcc5a6587b428f2bab37266;
    std::string name_9d006f942ca95620aa5a80f865f2f1af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".numeric");
    boost::python::object module_9d006f942ca95620aa5a80f865f2f1af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_9d006f942ca95620aa5a80f865f2f1af.c_str()))));
    boost::python::scope().attr("numeric") = module_9d006f942ca95620aa5a80f865f2f1af;
    boost::python::scope scope_9d006f942ca95620aa5a80f865f2f1af = module_9d006f942ca95620aa5a80f865f2f1af;
}
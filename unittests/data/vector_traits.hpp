// Copyright 2004 Roman Yakovenko.
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <string>
#include <vector>

struct _0_{};
typedef std::vector< _0_ > container;    
    
namespace vector_traits{
namespace yes{
    struct _1_{
        typedef int value_type;
        typedef std::vector< int > container;
    };

    struct _2_{
        typedef _0_ value_type;
        typedef std::vector< _0_ > container;
    };

    struct _3_{
        typedef std::string value_type;
        typedef std::vector< std::string > container;
    };

    struct _4_{
        typedef std::vector<int> value_type;
        typedef std::vector< std::vector<int> > container;
    };    

    struct _5_{
        typedef int value_type;
        typedef const std::vector< int > container;
    };

    struct _6_{
        typedef const int value_type;
        typedef const std::vector< const int > container;
    };
    
}

namespace no{
    struct _1_{
        template< class T >
        struct vector{};
            
        typedef vector<int> container;
    };
    
    struct _2_{
        typedef const std::vector< const int >& container;
    };
}
    
}
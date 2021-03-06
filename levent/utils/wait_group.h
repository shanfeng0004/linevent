#ifndef _LEVENT_UTILS_WAIT_GROUP_H__
#define _LEVENT_UTILS_WAIT_GROUP_H__

#include <levent/utils/mutex.h>
#include <levent/utils/condition.h>

namespace levent
{

class WaitGroup : public boost::noncopyable
{
public:
    WaitGroup(unsigned int count);

    ~WaitGroup();

    void Add();

    void Done();

    void Wait();

private:
    Mutex mutex_;
    Condition cond_;
    unsigned int count_;
};

}

#endif // _LEVENT_UTILS_WAIT_GROUP_H__

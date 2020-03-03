//
// Generated file, do not edit! Created by nedtool 5.6 from veins/modules/application/traci/infoMsg.msg.
//

#ifndef __VEINS_INFOMSG_M_H
#define __VEINS_INFOMSG_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0506
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// dll export symbol
#ifndef VEINS_API
#  if defined(VEINS_EXPORT)
#    define VEINS_API  OPP_DLLEXPORT
#  elif defined(VEINS_IMPORT)
#    define VEINS_API  OPP_DLLIMPORT
#  else
#    define VEINS_API
#  endif
#endif

// cplusplus {{
#include "veins/base/utils/Coord.h"
#include "veins/modules/messages/BaseFrame1609_4_m.h"
#include "veins/base/utils/SimpleAddress.h"
// }}


namespace veins {

/**
 * Class generated from <tt>veins/modules/application/traci/infoMsg.msg:27</tt> by nedtool.
 * <pre>
 * packet infoMsg extends BaseFrame1609_4
 * {
 *     LAddress::L2Type senderAddress = -1;
 *     int msgId = -1;
 *     bool correct = true;
 * }
 * </pre>
 */
class VEINS_API infoMsg : public ::veins::BaseFrame1609_4
{
  protected:
    LAddress::L2Type senderAddress;
    int msgId;
    bool correct;

  private:
    void copy(const infoMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const infoMsg&);

  public:
    infoMsg(const char *name=nullptr, short kind=0);
    infoMsg(const infoMsg& other);
    virtual ~infoMsg();
    infoMsg& operator=(const infoMsg& other);
    virtual infoMsg *dup() const override {return new infoMsg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual LAddress::L2Type& getSenderAddress();
    virtual const LAddress::L2Type& getSenderAddress() const {return const_cast<infoMsg*>(this)->getSenderAddress();}
    virtual void setSenderAddress(const LAddress::L2Type& senderAddress);
    virtual int getMsgId() const;
    virtual void setMsgId(int msgId);
    virtual bool getCorrect() const;
    virtual void setCorrect(bool correct);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const infoMsg& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, infoMsg& obj) {obj.parsimUnpack(b);}

} // namespace veins

#endif // ifndef __VEINS_INFOMSG_M_H


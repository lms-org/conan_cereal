#ifndef CEREAL_CEREALIZABLE_H
#define CEREAL_CEREALIZABLE_H

#include "lms/serializable.h"
#include "cereal/archives/portable_binary.hpp"

#define CEREAL_SERIALIZATION() \
virtual void lmsSerialize(std::ostream &os,Type type = Type::BINARY) const override { \
    (void)type;\
    cereal::PortableBinaryOutputArchive oarchive(os); \
    oarchive(*this); \
} \
virtual void lmsDeserialize(std::istream &is,Type type = Type::BINARY) override { \
    (void)type;\
    cereal::PortableBinaryInputArchive iarchive(is); \
    iarchive(*this); \
}
#endif //CEREAL_CEREALIZABLE_H


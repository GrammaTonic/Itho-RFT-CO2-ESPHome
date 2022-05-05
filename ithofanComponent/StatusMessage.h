#pragma once

#include "Message.h"
#include "FanStatus.h"

#include <vector>
#include <stdint.h>

class StatusMessage : public Message {
public:
    StatusMessage(std::vector<uint8_t> messageBytes);
    bool valid() const;
    FanStatus getFanStatus() const;
    uint16_t getRemainingTime() const;
    uint16_t getCo2() const;
    uint8_t getHumidity() const;
    uint8_t getRpm() const;
};
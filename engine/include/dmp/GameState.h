#pragma once

#include <cstdint>

namespace dmp {

// Placeholder for the authoritative game state. The real design follows in the
// architecture notebook (week 4-5).
class GameState {
public:
    static constexpr int kMinHeroes = 3;
    static constexpr int kMaxHeroes = 6;

    explicit GameState(int heroCount);

    int heroCount() const { return heroCount_; }
    std::uint32_t round() const { return round_; }

    void nextRound();

private:
    int heroCount_;
    std::uint32_t round_ = 1;
};

}  // namespace dmp

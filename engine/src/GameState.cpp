#include "dmp/GameState.h"

#include <stdexcept>

namespace dmp {

GameState::GameState(int heroCount) : heroCount_(heroCount) {
    if (heroCount < kMinHeroes || heroCount > kMaxHeroes) {
        throw std::invalid_argument("hero count must be between 3 and 6");
    }
}

void GameState::nextRound() { ++round_; }

}  // namespace dmp

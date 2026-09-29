#include <gtest/gtest.h>

#include <stdexcept>

#include "dmp/GameState.h"

using dmp::GameState;

TEST(GameState, AcceptsThreeToSixHeroes) {
    EXPECT_NO_THROW(GameState(3));
    EXPECT_NO_THROW(GameState(6));
}

TEST(GameState, RejectsInvalidHeroCount) {
    EXPECT_THROW(GameState(2), std::invalid_argument);
    EXPECT_THROW(GameState(7), std::invalid_argument);
}

TEST(GameState, StartsAtRoundOneAndAdvances) {
    GameState state(4);
    EXPECT_EQ(state.round(), 1u);
    state.nextRound();
    EXPECT_EQ(state.round(), 2u);
}

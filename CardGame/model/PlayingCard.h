//
//  PlayingCard.h
//  CardGame
//
//  Created by Banuri,Santosh on 3/26/14.
//  Copyright (c) 2014 Student. All rights reserved.
//

#import "Card.h"

/**
 * A PlayingCard object represents a card which is porker card without Joker.
 *
 *  - `suit`: heart is represented as ♥, diamond is represented as ♦, heart is represented as ♠, club is represented as ♣.
 *  - `rank`: rank value is from 1 to 13 which represents one of folloinwg value{ A | 2 | 3 | 4 | 5 | | 7 | 8 | 9 | 10 | J | Q | K }.
 **/
@interface PlayingCard : Card


/**
 * The value of card suit.
 **/
@property (strong,nonatomic) NSString* suit;

/**
 * The value of card rank
 **/
@property (nonatomic) NSUInteger rank;



/**
 * Returns a list of valid NSString suit value.
 *
 **/
+(NSArray*) validSuits;


/**
 * Returns max value of all possible rank values.
 *
 **/
+(NSUInteger) maxRank;
@end

//
//  Calculator.h
//  Fraction_Calculator
//
//  Created by Erik Gallegos on 11/20/14.
//  Copyright (c) 2014 Erik Gallegos. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Fraction.h"

@interface Calculator : NSObject

@property (strong, nonatomic) Fraction * operand1;
@property (strong, nonatomic) Fraction * operand2;
@property (strong, nonatomic) Fraction * accumulator;

-(Fraction *) performOperation: (char) op;
-(void) clear;

@end

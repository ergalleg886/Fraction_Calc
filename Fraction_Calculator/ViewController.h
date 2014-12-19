//
//  ViewController.h
//  Fraction_Calculator
//
//  Created by Erik Gallegos on 11/19/14.
//  Copyright (c) 2014 Erik Gallegos. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong,nonatomic) IBOutlet UILabel *display;

-(void) processDigit: (int) digit;
-(void) processOp: (char) theOp;
-(void) storeFracPart;

//Numeric keys

-(IBAction) clickDigit:(UIButton *) sender;

//Arithmetic Operation Keys

-(IBAction) clickPlus;
-(IBAction) clickMinus;
-(IBAction) clickMultiply;
-(IBAction) clickDivide;

//Misc Keys

-(IBAction) clickOver;
-(IBAction) clickEquals;
-(IBAction) clickClear;

@end


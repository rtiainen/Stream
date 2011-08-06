//
//  AudioAnaylizer.h
//  Stream
//
//  Created by tim lindner on 7/31/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AudioAnaylizer : NSView
{
    NSData *data;
    NSData *result;
    NSScrollView *scroller;
    NSSlider *slider;
    NSMutableArray *newConstraints;
}

@property(nonatomic, retain) NSData *data;
@property(nonatomic, retain) NSData *result;
@property(nonatomic, assign) NSScrollView *scroller;
@property(nonatomic, assign) NSSlider *slider;
@property(nonatomic, retain) NSMutableArray *newConstraints;

+ (NSArray *)anaylizerUTIs;
+ (NSString *)anayliserName;

- (IBAction)updateSlider:(id)sender;

@end

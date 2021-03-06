//
//  LPATPosition.h
//  LPAssistiveTouchDemo
//
//  Created by XuYafei on 16/1/8.
//  Copyright © 2016年 loopeer. All rights reserved.
//

#import <UIKit/UIKit.h>

static const CGFloat itemWidth = 100;
static const NSUInteger itemEdgeCount = 3;
static const CGFloat imageViewWidth = 60;
static const CGFloat cornerRadius = 14;
static const CGFloat contentViewEdge = 2.5;
static const CGFloat maxCount = 8;

@interface LPATPosition : NSObject

+ (instancetype)positionWithCount:(NSInteger)count index:(NSInteger)index;
+ (CGRect)contentViewSpreadFrame;
+ (CGPoint)cotentViewDefaultPointInRect:(CGRect)rect;

@property (nonatomic, assign, readonly) NSInteger count;
@property (nonatomic, assign, readonly) NSInteger index;
@property (nonatomic, assign) CGPoint center;
@property (nonatomic, assign) CGRect frame;

@end

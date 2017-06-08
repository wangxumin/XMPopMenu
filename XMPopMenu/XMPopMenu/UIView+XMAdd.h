//
//  UIView+XMAdd.h
//  XMPopMenu
//
//  Created by wangxumin on 2017/6/8.
//  Copyright © 2017年 wangxumin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (XMAdd)

@property(nonatomic) CGFloat left;
@property(nonatomic) CGFloat top;
@property(nonatomic) CGFloat right;
@property(nonatomic) CGFloat bottom;
@property(nonatomic) CGFloat width;
@property(nonatomic) CGFloat height;
@property(nonatomic) CGFloat centerX;
@property(nonatomic) CGFloat centerY;
@property(nonatomic,readonly) CGFloat screenX;
@property(nonatomic,readonly) CGFloat screenY;
@property(nonatomic,readonly) CGFloat screenViewX;
@property(nonatomic,readonly) CGFloat screenViewY;
@property(nonatomic,readonly) CGRect screenFrame;
@property(nonatomic) CGPoint origin;
@property(nonatomic) CGSize size;
@property(nonatomic) BOOL visible;

@end

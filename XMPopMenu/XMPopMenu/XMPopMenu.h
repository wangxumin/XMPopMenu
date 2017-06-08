//
//  XMPopMenu.h
//  XMPopMenu
//
//  Created by wangxumin on 2017/6/8.
//  Copyright © 2017年 wangxumin. All rights reserved.
//

#import <UIKit/UIKit.h>
@class XMPopMenu;

typedef NS_ENUM(NSInteger , XMPopMenuType){
    XMPopMenuTypeDefault = 0,//background color white
    XMPopMenuTypeDarkGray //background color dark
};

@protocol XMPopMenuDelegate <NSObject>

@optional
- (void)xmPopMenuDidSelectedRowAtIndex:(NSInteger)index popMenu:(XMPopMenu *)popMenu;
- (void)xmPopMenuWillAppear;
- (void)xmPopMenuDidAppear;
- (void)xmPopMenuWillDisAppear;
- (void)xmPopMenuDidDisAppear;

@end

@interface XMPopMenu : UIView

/**
 Used to set the radius ,default is 5.0
 */
@property (nonatomic, assign) CGFloat cornerRadius;

/**
 default is YES
 */
@property (nonatomic, assign , getter=isShadowShowing) BOOL isShowShadow;

/**
 default is YES
 */
@property (nonatomic, assign) BOOL showOverlyView;

/**
 default is YES
 */
@property (nonatomic, assign) BOOL dismissOnSelected;

/**
 default is YES
 */
@property (nonatomic, assign) BOOL dismissOnTouchOutside;

/**
 default is systemSize:15 ,this is only set the default popMenu,except the coustom view
 */
@property (nonatomic, strong) UIFont *font;

/**
 textColor ,default is blackColor,this is only set the default popMenu,except the coustom view
 */
@property (nonatomic, strong) UIColor *textColor;

/**
 pop point offset ,default is 0.0
 */
@property (nonatomic, assign) CGFloat offset;

@end

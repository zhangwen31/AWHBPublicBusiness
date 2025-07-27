//
//  AWHBPBSelectChannelView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2025/3/15.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^SelectChannelNameBlock)(NSString *channel);

@interface AWHBPBSelectChannelView : UIView

@property (nonatomic, strong) NSArray<NSString *> *dataArray;

@property (nonatomic, strong) UIFont *textFont;

@property (nonatomic, assign) CGFloat rowHeight;

@property (nonatomic, strong) NSString *currectTitle;

@property (nonatomic, assign) BOOL isShowLine;
///是否展示选择cell背景
@property (nonatomic, assign) BOOL isShowSelect;

@property (nonatomic, strong, readonly) UITableView *tableView;

@property (nonatomic, copy) SelectChannelNameBlock selectChannelNameBlock;

@end

NS_ASSUME_NONNULL_END

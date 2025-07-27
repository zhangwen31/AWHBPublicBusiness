//
//  AWHMMSideBarNewView.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2023/8/6.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHMMReturnTextBlock)(NSString *textLabelText);

@interface AWHMMSideBarNewView : UIView

@property (nonatomic, strong)NSMutableArray *dataArray;//所有消息
@property(nonatomic,copy)AWHMMReturnTextBlock ReturnTextLabelText;
@property(nonatomic, assign)AWHBBBusinessLoginModeType type;

@end

NS_ASSUME_NONNULL_END

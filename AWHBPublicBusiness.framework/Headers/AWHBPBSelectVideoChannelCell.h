//
//  AWHBPBSelectVideoChannelCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2025/3/15.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHBPBSelectVideoChannelClick)(UIButton *button);

@interface AWHBPBSelectVideoChannelCell : UITableViewCell

//逻辑通道
@property (nonatomic, strong) UIButton *logicalChannelBut;
//逻辑名称
@property (nonatomic, strong) UITextField *nameTextField;

@property (nonatomic, assign) NSInteger maxLength;

@property (nonatomic, copy) AWHBPBSelectVideoChannelClick selectVideoChannelClick;

@end

NS_ASSUME_NONNULL_END

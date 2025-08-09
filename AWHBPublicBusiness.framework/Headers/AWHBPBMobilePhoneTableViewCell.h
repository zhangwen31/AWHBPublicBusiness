//
//  AWHBPBMobilePhoneTableViewCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/5/4.
//  手机号码

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, AWHBPBMobilePhoneType) {
    AWHBPBMobilePhoneTypeOwnerPhone         = 0,    // 车主电话
    AWHBPBMobilePhoneTypeCustom             = 1,    // 自定义
};

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBMobilePhoneTableViewCell : UITableViewCell

@property(nonatomic,strong)UILabel *titleLab;
@property(nonatomic,strong)UIView *line1;
@property(nonatomic,strong)UITextField *detailTextField;
@property(nonatomic,assign)NSUInteger maxLength;
@property (nonatomic, assign) BOOL isHiddenLine;
@property (nonatomic, assign) AWHBPBMobilePhoneType phoneType;
@property (nonatomic, copy) void (^phoneTypeSelectBlock)(AWHBPBMobilePhoneType phoneType);
/**
 * 是否不能编辑
 */
@property (nonatomic, assign) BOOL isNoEdit;

@end

NS_ASSUME_NONNULL_END

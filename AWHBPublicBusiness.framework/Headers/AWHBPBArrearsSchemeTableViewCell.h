//
//  AWHBPBArrearsSchemeTableViewCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/5/4.
//  欠费方案

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBArrearsSchemeTableViewCell : UITableViewCell

@property(nonatomic,strong)UILabel *titleLab;
@property(nonatomic,strong)UIView *line1;
@property(nonatomic,strong) NSString *model;
@property(nonatomic,copy) void (^selectArrearsSchemeBlock)(NSString *model);
/**
 * 是否不能编辑
 */
@property (nonatomic, assign) BOOL isNoEdit;

@end

NS_ASSUME_NONNULL_END

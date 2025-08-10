//
//  AWHBPBOverdueSMSTableViewCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/5/4.
//  欠费短信

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBOverdueSMSTableViewCell : UITableViewCell

@property(nonatomic,strong)UILabel *titleLab;
@property(nonatomic,strong)UIView *line1;
@property(nonatomic,strong)UITextField *detailTextField;
@property(nonatomic,strong)UITextField *detailTextField2;
@property(nonatomic,assign)NSUInteger maxNum;
/**
 * 是否不能编辑
 */
@property (nonatomic, assign) BOOL isNoEdit;

@end

NS_ASSUME_NONNULL_END

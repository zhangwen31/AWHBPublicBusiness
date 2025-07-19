//
//  AWHBPBTerminalManagementCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/8/17.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBTerminalManagementModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBTerminalManagementCell : UITableViewCell

@property (nonatomic, strong) UILabel *serialNumLabel;
@property (nonatomic, strong) UILabel *identificationLabel;
@property (nonatomic, strong) UILabel *bindCarLabel;
@property (nonatomic, strong) AWHBPBTerminalManagementModel *model;
@property (nonatomic, assign) BOOL isSelected;
@property (nonatomic, copy) void (^bindTerminalRefreshDataBlock)(void);

@end

NS_ASSUME_NONNULL_END

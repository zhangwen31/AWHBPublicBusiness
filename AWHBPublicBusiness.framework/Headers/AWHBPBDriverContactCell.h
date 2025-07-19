//
//  AWHBPBDriverContactCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/5/28.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBDriverInfoModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBDriverContactCell : UITableViewCell

@property (nonatomic, assign) BOOL isHiddenLine;
@property (nonatomic, assign) BOOL isShowPhone;
@property(nonatomic,strong)UILabel *detailTextLab;
@property(nonatomic,strong)UILabel *titleLab;
@property (nonatomic, assign) BOOL isCanCopy;
@property (nonatomic, strong) AWHBPBDriverInfoModel *model;
@property (nonatomic, copy) void (^phoneClick)(void);

@end

NS_ASSUME_NONNULL_END

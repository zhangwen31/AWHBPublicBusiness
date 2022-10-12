//
//  AWHBPBDetailsListTableViewCell.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBDetailsListTableViewCell : UITableViewCell
@property(nonatomic,strong)UILabel *detailTextLab;
@property(nonatomic,strong)UILabel *titleLab;
@property(nonatomic,strong)UIView *line1;
@property (nonatomic, assign) BOOL isHiddenLine;
@property (nonatomic, assign) BOOL isShowPhone;
@property(nonatomic,assign)CGFloat detailRight;
@property (nonatomic, copy) void (^phoneClick)(void);

@end

NS_ASSUME_NONNULL_END

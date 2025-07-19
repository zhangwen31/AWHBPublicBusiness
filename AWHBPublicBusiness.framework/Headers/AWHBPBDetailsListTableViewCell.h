//
//  AWHBPBDetailsListTableViewCell.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBBTableViewCell.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBDetailsListTableViewCell : AWHBBBTableViewCell
@property(nonatomic,strong)UILabel *detailTextLab;
@property(nonatomic,strong)UILabel *titleLab;
@property(nonatomic,strong)UIView *line1;
@property (nonatomic, assign) BOOL isHiddenLine;
@property (nonatomic, assign) BOOL isShowPhone;
//是否可以复制 详情
@property (nonatomic, assign) BOOL isCanCopy;
//是否可以全部复制 标题与详情一起
@property (nonatomic, assign) BOOL isCanAllCopy;
//标题上边距固定
@property (nonatomic, assign) BOOL isTopFixed;
@property(nonatomic,assign)CGFloat detailRight;
@property (nonatomic, copy) void (^phoneClick)(void);

@end

NS_ASSUME_NONNULL_END

//
//  AWHBPBDetailsMaxLeftLineCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/5/27.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBNSENUM.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBDetailsMaxLeftLineCell : UITableViewCell

@property(nonatomic,strong)UILabel *detailTextLab;
@property(nonatomic,strong)UILabel *titleLab;
@property(nonatomic,strong)UIView *line1;
@property (nonatomic, assign) BOOL isHiddenLine;
@property (nonatomic, assign) BOOL isShowPhone;
@property (nonatomic, assign) BOOL isCanCopy;
@property (nonatomic, assign) BOOL isShowRightImage;
@property (nonatomic, assign) AWHBPBDetailsLineType type;
//标题上边距固定
@property (nonatomic, assign) BOOL isTopFixed;
@property(nonatomic,assign)CGFloat detailRight;
@property (nonatomic, copy) void (^phoneClick)(void);

@end

NS_ASSUME_NONNULL_END

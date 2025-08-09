//
//  AWHBPBSystemVideoStreamCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/5/19.
//

#import <UIKit/UIKit.h>
typedef void(^AWHBPBSystemVideoStreamClickTitle)(NSString * _Nullable title);
NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBSystemVideoStreamCell : UITableViewCell

@property (nonatomic, strong) NSString *titleName;
//是否选择主码流
@property (nonatomic, assign) BOOL isMainCode;
@property(nonatomic,strong)UIButton *mainStreamBtn;
@property(nonatomic,strong)UIButton *subCodeStreamBtn;
@property (nonatomic, assign) BOOL isHiddenLine;
@property(nonatomic,copy)AWHBPBSystemVideoStreamClickTitle ReturnClickTitle;

@end

NS_ASSUME_NONNULL_END

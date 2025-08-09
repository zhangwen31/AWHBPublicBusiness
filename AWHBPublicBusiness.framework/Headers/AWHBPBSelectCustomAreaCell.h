//
//  AWHBPBSelectCustomAreaCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/4/26.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBCustomDataModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBSelectCustomAreaCell : UITableViewCell

@property (nonatomic, strong) AWHBPBCustomDataModel *model;

@property (nonatomic, assign) BOOL isShowRightImage;

@property (nonatomic, assign) BOOL isSelectArea;

@property (nonatomic, copy) void (^SelectAreaClick)(AWHBPBCustomDataModel *model, BOOL isSelect);

@end

NS_ASSUME_NONNULL_END

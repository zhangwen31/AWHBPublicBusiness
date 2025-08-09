//
//  AWHBPBSelectAdministrativeAreaCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/4/29.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBAdministrativeDataModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBSelectAdministrativeAreaCell : UITableViewCell

@property (nonatomic, strong) AWHBPBAdministrativeDataModel *model;

@property (nonatomic, assign) BOOL isSelectArea;

@end

NS_ASSUME_NONNULL_END

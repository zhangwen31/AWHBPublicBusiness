//
//  AWHBPBCarStateListCell.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/6/4.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBMapIconDescriptionModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBCarStateListCell : UITableViewCell

@property(nonatomic, strong) AWHBPBMapIconDescriptionModel *model;

@property(nonatomic, assign) NSInteger num;

@end

NS_ASSUME_NONNULL_END

//
//  AWHBPBPhotoDetailViewController.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN
/** */
@protocol AWHBPBScrollToIndexDelegate <NSObject>
-(void)scrollToIndex:(NSInteger)index;
@end

@interface AWHBPBPhotoDetailViewController : AWHBBBaseViewController
@property(nonatomic,strong)NSMutableArray *dataArray;
@property(nonatomic,assign)NSInteger index;
@property(nonatomic,copy)NSString *carPlate;
@property(nonatomic,weak)id<AWHBPBScrollToIndexDelegate>delegate;
@end

NS_ASSUME_NONNULL_END

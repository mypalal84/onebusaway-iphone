#import <MapKit/MapKit.h>
#import <OBAKit/OBATripInstanceRef.h>

NS_ASSUME_NONNULL_BEGIN

@interface OBATripContinuationMapAnnotation : NSObject <MKAnnotation> {
    NSString * _title;
    OBATripInstanceRef * _tripInstance;
    CLLocationCoordinate2D _location;
}

- (id) initWithTitle:(NSString*)title tripInstance:(OBATripInstanceRef*)tripInstance location:(CLLocationCoordinate2D)location;

@property (nonatomic,readonly) OBATripInstanceRef * tripInstance;

@end

NS_ASSUME_NONNULL_END

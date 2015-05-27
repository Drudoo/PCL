#include <iostream>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>

int main(int argc, char const *argv[]) {

	pcl::PointCloud<pcl::PointXYZ> cloud;
	pcl::io::loadPCDFile(argv[1],cloud);

	std::cerr << "Read cloud: " << std::endl;
	std::cerr << cloud << std::endl;

	return 0;
}
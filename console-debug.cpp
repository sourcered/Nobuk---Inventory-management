#include "include/core.h"

int main()
{
    std::unique_ptr<nobuk::Core> core (new nobuk::Core());
    nobuk::Product product;
    product.id = 4;
    product.code = 3232;
    product.name = "Peca mola";
    product.quantity = 2.0f;
    product.price = 120.34f;
    // std::cout << core->add_product(&product) << std::endl;
    // std::cout << core->delete_product(1) << std::endl;
    // std::cout << core->add_quantity(4, 10.501f) << std::endl;
    // std::cout << core->remove_quantity(4, 131.0f) << std::endl;
    // std::cout << core->update_product(&product) << std::endl;

    return 0;
}

#include "include/console-log.h"

int main()
{
    std::unique_ptr<nobuk::Core> core (new nobuk::Core());
    nobuk::Product product;
    product.id = 4;
    product.code = 3131;
    product.name = "Bruta mola";
    product.quantity = 10.0f;
    product.price = 8.00f;
    // std::cout << core->add_product(&product) << std::endl;
    // std::cout << core->delete_product(1) << std::endl;
    // std::cout << core->add_quantity(4, 10.501f) << std::endl;
    // std::cout << core->remove_quantity(4, 131.0f) << std::endl;
    // std::cout << core->update_product(&product) << std::endl;

    std::unique_ptr<nobuk::Log> log(new nobuk::Log());
    std::list<float> l = core->ioDatabase->get_Quantitys();
    log->printList(l);
    // l = core->ioDatabase->get_Quantitys();
    // log->printList(l);

    return 0;
}

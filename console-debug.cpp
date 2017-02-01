#include "include/console-log.h"

int main()
{
    std::unique_ptr<nobuk::Core> core (new nobuk::Core());
    // core->ioDatabase->adjust_total(2);
    // std::cout << core->delete_database(1977) << std::endl;

    nobuk::Product product;
    product.id = 0;
    product.code = 3210;
    product.name = "Bruta mola";
    product.quantity = 5.0f;
    product.price = 80.00f;
    nobuk::Product product2;
    product2.id = 0;
    product2.code = 2000;
    product2.name = "Volvo";
    product2.quantity = 10.1f;
    product2.price = 74.50f;
    // std::cout << core->add_product(&product) << std::endl;
    // std::cout << core->add_product(&product2) << std::endl;
    // std::cout << core->delete_product(1) << std::endl;
    // std::cout << core->ioDatabase->update_ids() << std::endl;
    // std::cout << core->add_quantity(2, 2.0f) << std::endl;
    // std::cout << core->ioDatabase->update_price(2, 2.0f) << std::endl;
    // core->ioDatabase->adjust_total(2);
    // std::cout << core->remove_quantity(4, 131.0f) << std::endl;
    // std::cout << core->update_product(&product) << std::endl;

    // std::unique_ptr<nobuk::Log> log(new nobuk::Log());
    // std::list<float> l = core->ioDatabase->get_Quantitys();
    // float p = core->ioDatabase->get_Total(1);
    // std::list<float> l;
    // l.push_back(p);
    // log->printList(l);
    // log->printProducts(l);

    return 0;
}

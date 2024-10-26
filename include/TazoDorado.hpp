class TazoDorado
{
private:
    bool flotando;
public:
    TazoDorado() {
        this->flotando = false;
    }
    void Inicializar() {
        this->flotando = false;
    }
    ~TazoDorado(){}
        void Flotar(){   
        this -> flotando = true;
    }

    bool Flotando(){
        return this ->flotando;
    }
};
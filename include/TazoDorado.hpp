class TazoDorado
{
private:
    bool flotando;
public:
    TazoDorado() {
        this->flotando = false;
    }
    ~TazoDorado() {}
    void Flotar(){
        this -> flotando = true;
    }
};
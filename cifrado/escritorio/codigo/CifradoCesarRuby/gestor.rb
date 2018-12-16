require_relative 'cesar'
require_relative 'inverso'
require_relative 'inversoGrupos'

class Gestor

    attr_accessor :palabra
    attr_accessor :cesar
    attr_accessor :inverso
    attr_accessor :inverso_g

  
    def initialize
      @palabra = "gest"
      @cesar = Cesar.new
      @inverso = Reverse.new
      @rinverso_g = ReverseG.new
    end

    def cifrar( pala )
        @cesar.palabra = pala
        @inverso.palabra = pala
        @rinverso_g.palabra = pala

        @cesar.cifrar()
        @inverso.cifrar()
        @rinverso_g.cifrar()

    end

    def cifradoSinActualizacion
        @cesar.cifrar()
        @inverso.cifrar()
        @rinverso_g.cifrar()
    end
end



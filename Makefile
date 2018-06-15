
# Objetivo predeterminado (no se necesita especificarlo al invocar `make').
all: Principal

# Objetivos que no son archivos.
.PHONY: all clean  


# directorios 
HDIR    = Definiciones
CPPDIR  = Clases
ODIR    = obj

MODULOS = Cine Comentario CtrlPelicula CtrlReserva CtrlUsuario Credito Debito DtCine DtComentario DtDireccion DtFecha DtFuncion DtHora DtPago DtPelicula DtPuntaje DtReserva DtSala DtUsuario Fabrica Funcion MTarjeta Pelicula Puntaje Reloj Reserva Sala Tarjeta Usuario Utils 

# cadena de archivos, con directorio y extensión
HS   = $(MODULOS:%=$(HDIR)/%.hpp)
CPPS = $(MODULOS:%=$(CPPDIR)/%.cpp)
OS   = $(MODULOS:%=$(ODIR)/%.o)

PRINCIPAL=Principal
EJECUTABLE=Principal

# compilador
CC = g++
# opciones de compilación
CCFLAGS = -Werror -I$(HDIR) -g
# -DNDEBUG
# se agrega esta opción para que las llamadas a assert no hagan nada.

$(ODIR)/$(PRINCIPAL).o:$(PRINCIPAL).cpp
	$(CC) $(CCFLAGS) -c $< -o $@

# cada .o depende de su .cpp
# $@ se expande para tranformarse en el objetivo
# $< se expande para tranformarse en la primera dependencia
$(ODIR)/%.o: $(CPPDIR)/%.cpp $(HDIR)/%.hpp
	$(CC) $(CCFLAGS) -c $< -o $@

# $^ se expande para tranformarse en todas las dependencias 
$(EJECUTABLE): $(ODIR)/$(PRINCIPAL).o $(OS) 
	$(CC) $(CCFLAGS) $^ -o $@


# borra binarios
clean:
	@rm -f $(EJECUTABLE) $(ODIR)/$(PRINCIPAL).o $(OS)

# tp5
Maquina de Estado


DOT (lenguaje de programación)

El diagrama se realiza en forma online a traves de webgraphviz haciendo uso del siguinte lenguaje:
digraph maquina_de_estado {
size = "10,10" ;
ratio = fill;
node [style=filled];	
	rankdir=LR;	
	"-Out"[shape="box"] "IN"[shape="box"]
	"IN" -> "-Out" [ label = "' '|'\\t' / nc++" ];
	"IN" -> "-Out" [ label = "'\\n' / nl++,nc++" ];
	"-Out" -> "-Out" [ label = "'\\n' / nl++,nc++" ];
	"-Out" -> "-Out" [ label = "' '|'\\t' / nc++" ];	
	"-Out" -> "IN" [ label = "Otro / nw++,nc++" ];
	"IN" -> "IN" [ label = "Otro / nc++" ];

} 
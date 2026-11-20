10061d50:	55                   	push   ebp
10061d51:	8b ec                	mov    ebp,esp
10061d53:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10061d56:	ff 70 08             	push   DWORD PTR [eax+0x8]
10061d59:	0f b7 40 0e          	movzx  eax,WORD PTR [eax+0xe]
10061d5d:	8d 0c 80             	lea    ecx,[eax+eax*4]
10061d60:	a1 90 df 4c 10       	mov    eax,ds:0x104cdf90
10061d65:	ff 34 c8             	push   DWORD PTR [eax+ecx*8]
10061d68:	6a 09                	push   0x9
10061d6a:	ff 15 90 e6 1b 10    	call   DWORD PTR ds:0x101be690
10061d70:	5d                   	pop    ebp
10061d71:	c3                   	ret
10061d72:	cc                   	int3
10061d73:	cc                   	int3
10061d74:	cc                   	int3
10061d75:	cc                   	int3
10061d76:	cc                   	int3
10061d77:	cc                   	int3
10061d78:	cc                   	int3
10061d79:	cc                   	int3
10061d7a:	cc                   	int3
10061d7b:	cc                   	int3
10061d7c:	cc                   	int3
10061d7d:	cc                   	int3
10061d7e:	cc                   	int3
10061d7f:	cc                   	int3
10061d80:	55                   	push   ebp
10061d81:	8b ec                	mov    ebp,esp
10061d83:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10061d86:	ff 70 24             	push   DWORD PTR [eax+0x24]
10061d89:	e8 c2 ff ff ff       	call   0x10061d50
10061d8e:	83 c4 04             	add    esp,0x4
10061d91:	5d                   	pop    ebp
10061d92:	c3                   	ret

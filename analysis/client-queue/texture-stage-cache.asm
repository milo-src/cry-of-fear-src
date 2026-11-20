10062f10:	55                   	push   ebp
10062f11:	8b ec                	mov    ebp,esp
10062f13:	56                   	push   esi
10062f14:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10062f17:	39 35 f0 df 4c 10    	cmp    DWORD PTR ds:0x104cdff0,esi
10062f1d:	74 1a                	je     0x10062f39
10062f1f:	68 c0 84 00 00       	push   0x84c0
10062f24:	ff 15 64 e7 1b 10    	call   DWORD PTR ds:0x101be764
10062f2a:	56                   	push   esi
10062f2b:	e8 e0 fc ff ff       	call   0x10062c10
10062f30:	83 c4 04             	add    esp,0x4
10062f33:	89 35 f0 df 4c 10    	mov    DWORD PTR ds:0x104cdff0,esi
10062f39:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
10062f3c:	39 35 f4 df 4c 10    	cmp    DWORD PTR ds:0x104cdff4,esi
10062f42:	74 1a                	je     0x10062f5e
10062f44:	68 c1 84 00 00       	push   0x84c1
10062f49:	ff 15 64 e7 1b 10    	call   DWORD PTR ds:0x101be764
10062f4f:	56                   	push   esi
10062f50:	e8 bb fc ff ff       	call   0x10062c10
10062f55:	83 c4 04             	add    esp,0x4
10062f58:	89 35 f4 df 4c 10    	mov    DWORD PTR ds:0x104cdff4,esi
10062f5e:	a1 60 e7 1b 10       	mov    eax,ds:0x101be760
10062f63:	83 f8 03             	cmp    eax,0x3
10062f66:	7c 54                	jl     0x10062fbc
10062f68:	8b 75 10             	mov    esi,DWORD PTR [ebp+0x10]
10062f6b:	39 35 f8 df 4c 10    	cmp    DWORD PTR ds:0x104cdff8,esi
10062f71:	74 1f                	je     0x10062f92
10062f73:	68 c2 84 00 00       	push   0x84c2
10062f78:	ff 15 64 e7 1b 10    	call   DWORD PTR ds:0x101be764
10062f7e:	56                   	push   esi
10062f7f:	e8 8c fc ff ff       	call   0x10062c10
10062f84:	a1 60 e7 1b 10       	mov    eax,ds:0x101be760
10062f89:	83 c4 04             	add    esp,0x4
10062f8c:	89 35 f8 df 4c 10    	mov    DWORD PTR ds:0x104cdff8,esi
10062f92:	83 f8 04             	cmp    eax,0x4
10062f95:	7c 25                	jl     0x10062fbc
10062f97:	8b 75 14             	mov    esi,DWORD PTR [ebp+0x14]
10062f9a:	39 35 fc df 4c 10    	cmp    DWORD PTR ds:0x104cdffc,esi
10062fa0:	74 1a                	je     0x10062fbc
10062fa2:	68 c3 84 00 00       	push   0x84c3
10062fa7:	ff 15 64 e7 1b 10    	call   DWORD PTR ds:0x101be764
10062fad:	56                   	push   esi
10062fae:	e8 5d fc ff ff       	call   0x10062c10
10062fb3:	83 c4 04             	add    esp,0x4
10062fb6:	89 35 fc df 4c 10    	mov    DWORD PTR ds:0x104cdffc,esi
10062fbc:	5e                   	pop    esi
10062fbd:	5d                   	pop    ebp
10062fbe:	c3                   	ret
10062fbf:	cc                   	int3
10062fc0:	cc                   	int3
10062fc1:	cc                   	int3
10062fc2:	cc                   	int3
10062fc3:	cc                   	int3
10062fc4:	cc                   	int3
10062fc5:	cc                   	int3
10062fc6:	cc                   	int3
10062fc7:	cc                   	int3
10062fc8:	cc                   	int3
10062fc9:	cc                   	int3
10062fca:	cc                   	int3
10062fcb:	cc                   	int3
10062fcc:	cc                   	int3
10062fcd:	cc                   	int3
10062fce:	cc                   	int3
10062fcf:	cc                   	int3
10062fd0:	cc                   	int3
10062fd1:	cc                   	int3
10062fd2:	cc                   	int3
10062fd3:	cc                   	int3
10062fd4:	cc                   	int3
10062fd5:	cc                   	int3
10062fd6:	cc                   	int3
10062fd7:	cc                   	int3
10062fd8:	cc                   	int3
10062fd9:	cc                   	int3
10062fda:	cc                   	int3
10062fdb:	cc                   	int3
10062fdc:	cc                   	int3
10062fdd:	cc                   	int3
10062fde:	cc                   	int3
10062fdf:	cc                   	int3

 1d45b3d:	55                   	push   ebp
 1d45b3e:	8b ec                	mov    ebp,esp
 1d45b40:	83 3d 9c ba 06 02 00 	cmp    DWORD PTR ds:0x206ba9c,0x0
 1d45b47:	75 07                	jne    0x1d45b50
 1d45b49:	b8 9c b6 06 02       	mov    eax,0x206b69c
 1d45b4e:	eb 12                	jmp    0x1d45b62
 1d45b50:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
 1d45b53:	0f af 05 98 b6 06 02 	imul   eax,DWORD PTR ds:0x206b698
 1d45b5a:	8b 0d 9c ba 06 02    	mov    ecx,DWORD PTR ds:0x206ba9c
 1d45b60:	03 c1                	add    eax,ecx
 1d45b62:	5d                   	pop    ebp
 1d45b63:	c3                   	ret


D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1017bcbb <.text+0x17acbb>:
1017bcbb:	8b ff                	mov    edi,edi
1017bcbd:	55                   	push   ebp
1017bcbe:	8b ec                	mov    ebp,esp
1017bcc0:	83 3d 78 2e 23 10 00 	cmp    DWORD PTR ds:0x10232e78,0x0
1017bcc7:	75 29                	jne    0x1017bcf2
1017bcc9:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
1017bccd:	75 17                	jne    0x1017bce6
1017bccf:	e8 d5 a2 ff ff       	call   0x10175fa9
1017bcd4:	c7 00 16 00 00 00    	mov    DWORD PTR [eax],0x16
1017bcda:	e8 73 3d ff ff       	call   0x1016fa52
1017bcdf:	b8 ff ff ff 7f       	mov    eax,0x7fffffff
1017bce4:	5d                   	pop    ebp
1017bce5:	c3                   	ret
1017bce6:	83 7d 0c 00          	cmp    DWORD PTR [ebp+0xc],0x0
1017bcea:	74 e3                	je     0x1017bccf
1017bcec:	5d                   	pop    ebp
1017bced:	e9 90 ff ff ff       	jmp    0x1017bc82
1017bcf2:	6a 00                	push   0x0
1017bcf4:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1017bcf7:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1017bcfa:	e8 05 00 00 00       	call   0x1017bd04
1017bcff:	83 c4 0c             	add    esp,0xc
1017bd02:	5d                   	pop    ebp
1017bd03:	c3                   	ret

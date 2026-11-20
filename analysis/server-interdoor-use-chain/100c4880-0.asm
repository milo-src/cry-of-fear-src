
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c4880 <.text+0xc3880>:
100c4880:	55                   	push   ebp
100c4881:	8b ec                	mov    ebp,esp
100c4883:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
100c4886:	52                   	push   edx
100c4887:	8b 4a 60             	mov    ecx,DWORD PTR [edx+0x60]
100c488a:	83 c9 20             	or     ecx,0x20
100c488d:	8b c1                	mov    eax,ecx
100c488f:	83 c9 40             	or     ecx,0x40
100c4892:	83 e0 bf             	and    eax,0xffffffbf
100c4895:	83 7d 0c 00          	cmp    DWORD PTR [ebp+0xc],0x0
100c4899:	0f 44 c8             	cmove  ecx,eax
100c489c:	89 4a 60             	mov    DWORD PTR [edx+0x60],ecx
100c489f:	e8 3c fc ff ff       	call   0x100c44e0
100c48a4:	83 c4 04             	add    esp,0x4
100c48a7:	5d                   	pop    ebp
100c48a8:	c3                   	ret

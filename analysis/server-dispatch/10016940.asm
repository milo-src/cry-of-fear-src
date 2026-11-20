
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10016940 <.text+0x15940>:
10016940:	55                   	push   ebp
10016941:	8b ec                	mov    ebp,esp
10016943:	56                   	push   esi
10016944:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
10016947:	85 f6                	test   esi,esi
10016949:	74 31                	je     0x1001697c
1001694b:	57                   	push   edi
1001694c:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1001694f:	85 ff                	test   edi,edi
10016951:	74 28                	je     0x1001697b
10016953:	8d 87 80 00 00 00    	lea    eax,[edi+0x80]
10016959:	56                   	push   esi
1001695a:	50                   	push   eax
1001695b:	e8 10 fc 0f 00       	call   0x10116570
10016960:	83 c4 08             	add    esp,0x8
10016963:	83 7e 0c 00          	cmp    DWORD PTR [esi+0xc],0x0
10016967:	75 12                	jne    0x1001697b
10016969:	83 3e 00             	cmp    DWORD PTR [esi],0x0
1001696c:	74 0d                	je     0x1001697b
1001696e:	8b 4f 7c             	mov    ecx,DWORD PTR [edi+0x7c]
10016971:	85 c9                	test   ecx,ecx
10016973:	74 06                	je     0x1001697b
10016975:	8b 01                	mov    eax,DWORD PTR [ecx]
10016977:	56                   	push   esi
10016978:	ff 50 34             	call   DWORD PTR [eax+0x34]
1001697b:	5f                   	pop    edi
1001697c:	5e                   	pop    esi
1001697d:	5d                   	pop    ebp
1001697e:	c3                   	ret

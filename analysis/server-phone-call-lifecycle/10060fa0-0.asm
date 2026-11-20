
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10060fa0 <.text+0x5ffa0>:
10060fa0:	55                   	push   ebp
10060fa1:	8b ec                	mov    ebp,esp
10060fa3:	56                   	push   esi
10060fa4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10060fa7:	57                   	push   edi
10060fa8:	8b f9                	mov    edi,ecx
10060faa:	85 f6                	test   esi,esi
10060fac:	74 46                	je     0x10060ff4
10060fae:	8b 06                	mov    eax,DWORD PTR [esi]
10060fb0:	8b ce                	mov    ecx,esi
10060fb2:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
10060fb8:	85 c0                	test   eax,eax
10060fba:	74 38                	je     0x10060ff4
10060fbc:	ff 76 04             	push   DWORD PTR [esi+0x4]
10060fbf:	e8 1c 16 fb ff       	call   0x100125e0
10060fc4:	83 c4 04             	add    esp,0x4
10060fc7:	c6 87 00 02 00 00 00 	mov    BYTE PTR [edi+0x200],0x0
10060fce:	85 c0                	test   eax,eax
10060fd0:	74 22                	je     0x10060ff4
10060fd2:	50                   	push   eax
10060fd3:	8d 8f e0 00 00 00    	lea    ecx,[edi+0xe0]
10060fd9:	e8 62 67 fb ff       	call   0x10017740
10060fde:	8b 07                	mov    eax,DWORD PTR [edi]
10060fe0:	51                   	push   ecx
10060fe1:	8b cf                	mov    ecx,edi
10060fe3:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
10060fea:	ff 50 08             	call   DWORD PTR [eax+0x8]
10060fed:	c7 47 78 00 10 06 10 	mov    DWORD PTR [edi+0x78],0x10061000
10060ff4:	5f                   	pop    edi
10060ff5:	5e                   	pop    esi
10060ff6:	5d                   	pop    ebp
10060ff7:	c2 10 00             	ret    0x10
